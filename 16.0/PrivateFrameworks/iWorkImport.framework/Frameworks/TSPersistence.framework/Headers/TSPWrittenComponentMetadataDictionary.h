// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPWRITTENCOMPONENTMETADATADICTIONARY_H
#define TSPWRITTENCOMPONENTMETADATADICTIONARY_H


#import <Foundation/Foundation.h>


@interface TSPWrittenComponentMetadataDictionary : NSObject {
    *void _map;
}




-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)metadataForComponentIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateMetadataUsingBlock:(id)arg0 ;
-(void)setMetadata:(id)arg0 forComponentIdentifier:(NSInteger)arg1 ;


@end


#endif