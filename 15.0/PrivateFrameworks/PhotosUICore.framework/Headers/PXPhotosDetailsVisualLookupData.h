// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSVISUALLOOKUPDATA_H
#define PXPHOTOSDETAILSVISUALLOOKUPDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXPhotosDetailsVisualLookupData : NSObject

@property (copy, nonatomic) NSString *displayMessage; // ivar: _displayMessage
@property (copy, nonatomic) NSString *glyphImageName; // ivar: _glyphImageName
@property (copy, nonatomic) NSString *visualDomain; // ivar: _visualDomain


-(BOOL)_isEqualToVisualLookupData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithGlyphName:(id)arg0 visualDomain:(id)arg1 displayMessage:(id)arg2 ;


@end


#endif