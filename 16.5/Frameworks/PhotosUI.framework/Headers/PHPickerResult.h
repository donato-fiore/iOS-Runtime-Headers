// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPICKERRESULT_H
#define PHPICKERRESULT_H

@class NSString, NSItemProvider;

#import <Foundation/Foundation.h>


@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSString *_personIdentifier; // ivar: __personIdentifier
@property (readonly, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithItemProvider:(id)arg0 assetIdentifier:(id)arg1 ;
-(id)_initWithItemProvider:(id)arg0 assetIdentifier:(id)arg1 personIdentifier:(id)arg2 ;
-(id)init;


@end


#endif