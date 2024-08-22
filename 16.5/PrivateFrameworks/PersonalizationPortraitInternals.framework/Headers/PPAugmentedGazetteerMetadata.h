// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPAUGMENTEDGAZETTEERMETADATA_H
#define PPAUGMENTEDGAZETTEERMETADATA_H

@class NSString;
@protocol PPConstructableFromStatement;

#import <Foundation/Foundation.h>


@interface PPAugmentedGazetteerMetadata : NSObject <PPConstructableFromStatement>

 {
    BOOL _isLocation;
    unsigned int _gazetteerDomain;
    NSString *_qid;
    CGFloat _threshold;
    NSString *_category;
    NSString *_alias;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStatement:(id)arg0 ;


@end


#endif