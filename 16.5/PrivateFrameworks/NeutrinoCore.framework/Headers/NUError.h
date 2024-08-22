// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUERROR_H
#define NUERROR_H

@class NSError, NSString;



@interface NUError : NSError

@property (readonly) id *invalidObject;
@property (readonly) NSString *nonLocalizedFailureReason;


+(id)canceledError:(id)arg0 object:(id)arg1 ;
+(id)duplicateError:(id)arg0 object:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 reason:(id)arg1 object:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 reason:(id)arg1 object:(id)arg2 underlyingError:(id)arg3 ;
+(id)extraError:(id)arg0 object:(id)arg1 ;
+(id)failureError:(id)arg0 object:(id)arg1 ;
+(id)invalidError:(id)arg0 object:(id)arg1 ;
+(id)mismatchError:(id)arg0 object:(id)arg1 ;
+(id)missingError:(id)arg0 object:(id)arg1 ;
+(id)rangeError:(id)arg0 object:(id)arg1 ;
+(id)resourceUnavailableError:(id)arg0 object:(id)arg1 ;
+(id)rootError:(id)arg0 ;
+(id)timeoutError:(id)arg0 object:(id)arg1 ;
+(id)underlyingError:(id)arg0 ;
+(id)unknownError:(id)arg0 object:(id)arg1 ;
+(id)unsupportedError:(id)arg0 object:(id)arg1 ;
-(id)description;
-(id)descriptionWithIndent:(NSInteger)arg0 ;
-(id)errorCodeDescription;


@end


#endif