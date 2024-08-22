// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDCLIPRESTRICTIONSTASK_H
#define ASDCLIPRESTRICTIONSTASK_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface ASDClipRestrictionsTask : NSObject

@property (copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) BOOL hasErrorStatus;
@property (readonly, nonatomic) NSInteger responseCode; // ivar: _responseCode
@property (copy, nonatomic) NSDate *verificationDate; // ivar: _verificationDate


-(BOOL)hasResponseFlag:(NSInteger)arg0 ;
-(id)initWithClipRequest:(id)arg0 ;
-(id)initWithClipRequest:(id)arg0 verificationDate:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 verificationDate:(id)arg1 ;
-(void)_verifyRequest;


@end


#endif