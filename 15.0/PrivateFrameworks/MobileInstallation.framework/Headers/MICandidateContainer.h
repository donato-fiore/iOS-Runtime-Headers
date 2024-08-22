// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MICANDIDATECONTAINER_H
#define MICANDIDATECONTAINER_H

@class NSString, NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MICandidateContainer : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger estimatedSize;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAppleApp;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *rootURL; // ivar: _rootURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContainerURL:(id)arg0 identifier:(id)arg1 metadata:(id)arg2 ;


@end


#endif