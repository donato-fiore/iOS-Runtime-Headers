// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING26DUSTRUCTUREDENTITYRESPONSE_H
#define _TTC21DOCUMENTUNDERSTANDING26DUSTRUCTUREDENTITYRESPONSE_H

@class NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding11DUDebugInfo.h"

@interface _TtC21DocumentUnderstanding26DUStructuredEntityResponse : NSObject <NSCoding, NSCopying>

 {
    ? structuredEntities;
}


@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo; // ivar: responseDebugInfo
@property (nonatomic, copy) NSArray *structuredEntities;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif