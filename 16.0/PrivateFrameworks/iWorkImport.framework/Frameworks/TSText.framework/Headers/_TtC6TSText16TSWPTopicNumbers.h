// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6TSTEXT16TSWPTOPICNUMBERS_H
#define _TTC6TSTEXT16TSWPTOPICNUMBERS_H


#import <Foundation/Foundation.h>


@interface _TtC6TSText16TSWPTopicNumbers : NSObject {
    ? storage;
    ? topicNumberData;
    ? invalidCharIndex;
}




-(NSUInteger)listNumberForCharIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)numberedListLabelForCharIndex:(NSUInteger)arg0 includeFormatting:(BOOL)arg1 ;
-(void)invalidateFromCharIndex:(NSUInteger)arg0 ;


@end


#endif