// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUARTWORK_H
#define MRUARTWORK_H

@class MPArtworkCatalog, UIImage, NSString, MPCPlayerResponse;

#import <Foundation/Foundation.h>


@interface MRUArtwork : NSObject

@property (readonly, nonatomic) MPArtworkCatalog *catalog;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *placeholderSymbolName; // ivar: _placeholderSymbolName
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithImage:(id)arg0 placeholderSymbolName:(id)arg1 ;
-(id)initWithMPCResponse:(id)arg0 placeholderSymbolName:(id)arg1 ;


@end


#endif