// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPICKERRESULT_H
#define PHPICKERRESULT_H

@class NSString, NSItemProvider;

#import <Foundation/Foundation.h>


@interface PHPickerResult : NSObject

@property (readonly, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithItemProvider:(id)arg0 assetIdentifier:(id)arg1 ;
-(id)init;


@end


#endif