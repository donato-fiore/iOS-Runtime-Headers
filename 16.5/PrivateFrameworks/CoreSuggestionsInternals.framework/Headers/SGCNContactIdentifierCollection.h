// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCNCONTACTIDENTIFIERCOLLECTION_H
#define SGCNCONTACTIDENTIFIERCOLLECTION_H

@class NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData *_optimizedBuffer;
    NSMutableArray *_unoptimizedIdentifiers;
}




-(BOOL)_optimizeAndAddCNContactIdentifier:(id)arg0 ;
-(id)init;
-(id)proxyArray;
-(void)addCNContactIdentifier:(id)arg0 ;


@end


#endif