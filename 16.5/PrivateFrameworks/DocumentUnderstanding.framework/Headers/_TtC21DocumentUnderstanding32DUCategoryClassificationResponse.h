// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING32DUCATEGORYCLASSIFICATIONRESPONSE_H
#define _TTC21DOCUMENTUNDERSTANDING32DUCATEGORYCLASSIFICATIONRESPONSE_H

@class NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding11DUDebugInfo.h"

@interface _TtC21DocumentUnderstanding32DUCategoryClassificationResponse : NSObject <NSCoding, NSCopying>

 {
    ? categories;
}


@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo; // ivar: responseDebugInfo


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif