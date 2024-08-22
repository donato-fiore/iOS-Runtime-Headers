// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUWARNING_H
#define TSUWARNING_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSUWarning : NSObject

@property (copy, nonatomic) NSString *detailMessage; // ivar: _detailMessage
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger severity;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)fontWarningWithMessage:(id)arg0 fontNames:(id)arg1 ;
+(id)mediaUploadWarningWithMessage:(id)arg0 data:(id)arg1 ;
+(id)missingMediaWarningWithMessage:(id)arg0 data:(id)arg1 ;
+(id)warningWithKind:(NSInteger)arg0 message:(id)arg1 ;
+(id)warningWithMessage:(id)arg0 ;
+(id)warningWithMessage:(id)arg0 affectedObject:(id)arg1 ;
+(id)warningWithMessage:(id)arg0 affectedObjects:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFontWarning;
-(NSUInteger)hash;
-(id)affectedObjects;
-(id)initWithKind:(NSInteger)arg0 message:(id)arg1 ;
-(void)addAffectedObjects:(id)arg0 ;
-(void)setAffectedObjects:(id)arg0 ;


@end


#endif