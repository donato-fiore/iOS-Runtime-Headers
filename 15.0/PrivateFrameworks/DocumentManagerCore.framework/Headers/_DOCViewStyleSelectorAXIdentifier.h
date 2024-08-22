// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DOCVIEWSTYLESELECTORAXIDENTIFIER_H
#define _DOCVIEWSTYLESELECTORAXIDENTIFIER_H

@class NSString;
@protocol DOCViewStyleSelectorAXIdentifier;

#import <Foundation/Foundation.h>


@interface _DOCViewStyleSelectorAXIdentifier : NSObject <DOCViewStyleSelectorAXIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)column;
+(id)commonPrefix;
+(id)grid;
+(id)idBase;
+(id)list;


@end


#endif