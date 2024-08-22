// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHUSERINPUT_H
#define ICSEARCHUSERINPUT_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICSearchUserInput : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL isEmpty; // ivar: _isEmpty
@property (readonly, copy, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(id)emptyInput;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSearchString:(id)arg0 suggestions:(id)arg1 keyboardLanguage:(id)arg2 ;
-(void)_configureEmptyInput;


@end


#endif