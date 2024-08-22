// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTEXTITEMCONTAINER_H
#define GEOTEXTITEMCONTAINER_H

@class NSArray;
@protocol GEOTextItemContainer, GEOTextItemDisplayConfig;

#import <Foundation/Foundation.h>


@interface GEOTextItemContainer : NSObject <GEOTextItemContainer>



@property (readonly, nonatomic) NSObject<GEOTextItemDisplayConfig> *displayConfig; // ivar: _displayConfig
@property (readonly, nonatomic) NSArray *textItems; // ivar: _textItems


-(id)init;
-(id)initWithDisplayConfig:(id)arg0 textItems:(id)arg1 ;
-(id)initWithTextItemContainer:(id)arg0 ;


@end


#endif