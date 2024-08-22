// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYHIERARCHYDECODER_H
#define UIACCESSIBILITYHIERARCHYDECODER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface UIAccessibilityHierarchyDecoder : NSObject

@property (retain, nonatomic) NSData *hierarchyData; // ivar: _hierarchyData


-(id)decodeHierarchyWithContainer:(id)arg0 error:(*id)arg1 ;
-(id)initWithHierarchyData:(id)arg0 ;


@end


#endif