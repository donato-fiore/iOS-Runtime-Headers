// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFDATASTORE_H
#define AFDATASTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFDataStore : NSObject {
    NSMutableDictionary *_entries;
}




-(id)imageDataForKey:(id)arg0 ;
-(id)init;
-(id)initWithEntries:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)propertyListRepresentation;
-(void)setImageData:(id)arg0 forKey:(id)arg1 ;


@end


#endif