// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCXRELATIONSHIPS_H
#define OCXRELATIONSHIPS_H

@class NSString, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OCXRelationships : NSObject {
    NSString *mPath;
    NSMutableArray *mRelationships;
    NSMutableDictionary *mRelationshipMap;
    NSUInteger mNextId;
}




-(BOOL)isEmpty;
-(id)addRelationshipForKey:(id)arg0 type:(id)arg1 target:(id)arg2 ;
-(id)addRelationshipForKey:(id)arg0 type:(id)arg1 target:(id)arg2 external:(BOOL)arg3 ;
-(id)idForKey:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)path;
-(id)targetForKey:(id)arg0 ;
-(void)writeRelationshipsToFilename:(id)arg0 stream:(id)arg1 ;


@end


#endif