// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXREFERENCE_H
#define EXREFERENCE_H


#import <Foundation/Foundation.h>


@interface EXReference : NSObject



+(BOOL)edAreaReferenceFromXmlReference:(id)arg0 areaReference:(struct EDAreaReference *)arg1 ;
+(id)edDiscontinousReferencesFromXmlRanges:(id)arg0 ;
+(id)edReferenceFromXmlReference:(id)arg0 ;
+(id)numberToStringBase26:(int)arg0 ;
+(id)xmlRangesFromDiscontinuousReferences:(id)arg0 ;
+(id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg0 ;
+(id)xmlReferenceFromEDReference:(id)arg0 ;


@end


#endif