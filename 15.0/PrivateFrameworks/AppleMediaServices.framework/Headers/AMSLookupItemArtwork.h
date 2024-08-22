// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSLOOKUPITEMARTWORK_H
#define AMSLOOKUPITEMARTWORK_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSLookupItemArtwork : NSObject

@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSDictionary *artworkDictionary; // ivar: _artworkDictionary
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat width;


-(id)URLWithHeight:(NSInteger)arg0 width:(NSInteger)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(id)colorWithKind:(id)arg0 ;
-(id)initWithArtworkDictionary:(id)arg0 ;


@end


#endif