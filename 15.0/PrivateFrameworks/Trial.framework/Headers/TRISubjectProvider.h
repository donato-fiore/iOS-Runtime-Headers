// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISUBJECTPROVIDER_H
#define TRISUBJECTPROVIDER_H

@class NSString, _PASLock;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRISubjectProvider : NSObject <NSSecureCoding>

 {
    NSString *_path;
    _PASLock *_lock;
}




+(BOOL)supportsSecureCoding;
+(id)defaultProviderWithPaths:(id)arg0 ;
-(BOOL)loadUsingGuardedData:(id)arg0 ;
-(BOOL)save;
-(NSUInteger)numberOfWeeksPerRotation;
-(id)anchorDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)nextRotationDate;
-(id)nextRotationDateAfter:(id)arg0 ;
-(id)subject;
-(id)subjectWithProjectId:(int)arg0 ;
-(void)decodeWithCoder:(id)arg0 guardedData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 guardedData:(id)arg1 ;
-(void)rotateSubject;
-(void)setNextRotationDate:(id)arg0 ;


@end


#endif