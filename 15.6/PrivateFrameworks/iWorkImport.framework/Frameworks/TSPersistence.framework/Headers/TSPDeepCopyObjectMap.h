// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDEEPCOPYOBJECTMAP_H
#define TSPDEEPCOPYOBJECTMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TSPDeepCopyObjectMap : NSObject {
    NSMapTable *_archivedObjects;
    NSMapTable *_originalIdentifierToDeepCopyObject;
    NSMapTable *_deepCopyIdentifierToOriginalObject;
}




-(id)deepCopyForObject:(id)arg0 ;
-(id)objectForDeepCopy:(id)arg0 ;
-(void)didReadObjects:(id)arg0 ;
-(void)didWriteObjects:(id)arg0 ;


@end


#endif