// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKSEARCHFOUNDATIONIMAGE_H
#define MKSEARCHFOUNDATIONIMAGE_H

@class SFImage, NSURL, GEOStyleAttribute;
@protocol OS_dispatch_group;



@interface MKSearchFoundationImage : SFImage {
    NSObject<OS_dispatch_group> *_group;
    NSURL *_url;
    GEOStyleAttribute *_styleAttribute;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)initIconWithSize:(NSUInteger)arg0 mapItem:(id)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(id)arg0 ;
-(void)loadImageDataWithCompletionHandler:(id)arg0 ;


@end


#endif