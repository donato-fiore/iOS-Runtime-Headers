// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXRUNNODEOPERATIONMAP_H
#define PXRUNNODEOPERATIONMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}




-(id)init;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)operationForRunNode:(id)arg0 ;


@end


#endif