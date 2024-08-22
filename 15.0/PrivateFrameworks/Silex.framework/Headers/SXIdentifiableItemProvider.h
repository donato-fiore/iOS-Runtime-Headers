// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXIDENTIFIABLEITEMPROVIDER_H
#define SXIDENTIFIABLEITEMPROVIDER_H

@class NSItemProvider, NSString;



@interface SXIdentifiableItemProvider : NSItemProvider

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithObject:(id)arg0 identifier:(id)arg1 ;


@end


#endif