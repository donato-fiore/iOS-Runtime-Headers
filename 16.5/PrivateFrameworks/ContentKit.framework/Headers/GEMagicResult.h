// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEMAGICRESULT_H
#define GEMAGICRESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface GEMagicResult : NSObject

@property (readonly, copy, nonatomic) NSString *description; // ivar: description
@property (readonly, copy, nonatomic) NSString *mimeType; // ivar: mimeType
@property (readonly, copy, nonatomic) NSString *uniformType; // ivar: uniformType
@property (readonly, copy, nonatomic) NSArray *uniformTypeHierarchy; // ivar: uniformTypeHierarchy


-(id)initWithMimeType:(id)arg0 description:(id)arg1 typeHierarchy:(id)arg2 ;
-(void)dealloc;


@end


#endif