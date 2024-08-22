// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEFERREDLOCALIZEDSTRING_H
#define WFDEFERREDLOCALIZEDSTRING_H

@class NSString;



@interface WFDeferredLocalizedString : NSString

@property (copy, nonatomic) NSString *backingStore; // ivar: _backingStore
@property (copy, nonatomic) NSString *localizedValue; // ivar: _localizedValue


-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharactersNoCopy:(*unsigned short)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;


@end


#endif