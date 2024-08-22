// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKLINKICONPARAMETERS_H
#define _WKLINKICONPARAMETERS_H

@class NSDictionary, NSString, NSNumber, NSURL;

#import <Foundation/Foundation.h>


@interface _WKLinkIconParameters : NSObject {
    RetainPtr<NSURL> _url;
    NSInteger _iconType;
    RetainPtr<NSString> _mimeType;
    RetainPtr<NSNumber> _size;
    RetainPtr<NSMutableDictionary> _attributes;
}


@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSInteger iconType;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSNumber *size;
@property (readonly, copy, nonatomic) NSURL *url;


-(id)_initWithLinkIcon:(*void)arg0 ;


@end


#endif