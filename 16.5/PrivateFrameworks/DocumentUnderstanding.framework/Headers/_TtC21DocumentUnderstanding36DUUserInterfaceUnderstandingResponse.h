// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING36DUUSERINTERFACEUNDERSTANDINGRESPONSE_H
#define _TTC21DOCUMENTUNDERSTANDING36DUUSERINTERFACEUNDERSTANDINGRESPONSE_H

@class NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding11DUDebugInfo.h"

@interface _TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying>

 {
    ? foundEntities;
}


@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo; // ivar: responseDebugInfo


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif