// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUARTWORK_H
#define MRUARTWORK_H

@class UIImage, MPArtworkCatalog, NSString, MPCPlayerResponse;

#import <Foundation/Foundation.h>


@interface MRUArtwork : NSObject

@property (readonly, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (readonly, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *placeholderSymbolName; // ivar: _placeholderSymbolName
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithImage:(id)arg0 appIcon:(id)arg1 placeholderSymbolName:(id)arg2 ;
-(id)initWithMPCResponse:(id)arg0 appIcon:(id)arg1 placeholderSymbolName:(id)arg2 ;


@end


#endif