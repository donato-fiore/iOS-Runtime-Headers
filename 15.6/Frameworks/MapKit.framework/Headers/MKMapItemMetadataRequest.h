// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPITEMMETADATAREQUEST_H
#define MKMAPITEMMETADATAREQUEST_H

@class NSURL, NSURLRequest;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKMapItemMetadataRequest : NSObject

@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURLRequest *urlRequest;


-(void)handleData:(id)arg0 ;
-(void)handleError:(id)arg0 ;


@end


#endif