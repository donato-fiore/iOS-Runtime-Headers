// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDCONTENTFORMATSCOLLECTION_H
#define EDCONTENTFORMATSCOLLECTION_H



#import "EDKeyedCollection.h"

@interface EDContentFormatsCollection : EDKeyedCollection {
    NSUInteger mNextContentFormatId;
}




-(BOOL)isOverwritingKeyOK;
-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)addOrEquivalentObject:(id)arg0 ;
-(id)init;
-(void)addDefaultWithNSString:(id)arg0 formatId:(NSUInteger)arg1 ;
-(void)setupDefaults;


@end


#endif