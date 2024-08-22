// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSEARCHQUERYSEGMENT_H
#define ICSEARCHQUERYSEGMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICSearchQuerySegment : NSObject

@property (nonatomic) BOOL isExpandable; // ivar: _isExpandable
@property (nonatomic) _NSRange segmentRange; // ivar: _segmentRange
@property (retain, nonatomic) NSString *segmentString; // ivar: _segmentString
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithSegmentString:(id)arg0 range:(struct _NSRange )arg1 type:(NSUInteger)arg2 isExpandable:(BOOL)arg3 ;


@end


#endif