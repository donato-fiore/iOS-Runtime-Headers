// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFILEBACKEDASSETDESCRIPTION_H
#define PXFILEBACKEDASSETDESCRIPTION_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface PXFileBackedAssetDescription : NSObject {
    NSMutableDictionary *_descriptionDictionary;
}


@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(id)simpleImageDescriptionWithURL:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif