// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMAGESTACKIMAGEASSET_H
#define _UIIMAGESTACKIMAGEASSET_H

@class CUICatalog, NSData;


#import "UIImageAsset.h"

@interface _UIImageStackImageAsset : UIImageAsset

@property (retain, nonatomic) CUICatalog *catalog; // ivar: _catalog
@property (copy, nonatomic) NSData *stackData; // ivar: _stackData


-(id)imageWithConfiguration:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif