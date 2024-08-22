// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIJSAMSBAGINTERFACE_H
#define VUIJSAMSBAGINTERFACE_H

@class NSDictionary;
@protocol VUIJSAMSBagDelegate;


#import "VUIJSObject.h"

@interface VUIJSAMSBagInterface : VUIJSObject <VUIJSAMSBagDelegate>



@property (readonly, nonatomic) NSDictionary *VUIAMSBagValueTypes;


+(id)convertNSErrorIntoDict:(id)arg0 ;
+(id)generateResponseDictionary:(id)arg0 withError:(id)arg1 ;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)URLForKeyWithCompletion:(id)arg0 ;
-(void)arrayForKeyWithCompletion:(id)arg0 ;
-(void)boolForKeyWithCompletion:(id)arg0 ;
-(void)dictionaryForKeyWithCompletion:(id)arg0 ;
-(void)doubleForKeyWithCompletion:(id)arg0 ;
-(void)integerForKeyWithCompletion:(id)arg0 ;
-(void)stringForKeyWithCompletion:(id)arg0 ;


@end


#endif