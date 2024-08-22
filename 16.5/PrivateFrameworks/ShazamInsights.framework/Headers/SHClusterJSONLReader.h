// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCLUSTERJSONLREADER_H
#define SHCLUSTERJSONLREADER_H

@class NSString;
@protocol SHJSONLDataDetokenizerDelegate;

#import <Foundation/Foundation.h>


@interface SHClusterJSONLReader : NSObject <SHJSONLDataDetokenizerDelegate>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (readonly) Class superclass;


-(BOOL)parsedJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)readDataLineByLineFromURL:(id)arg0 error:(*id)arg1 callback:(id)arg2 ;
-(void)importClusters:(id)arg0 toParentCluster:(id)arg1 startIndex:(NSUInteger)arg2 ;


@end


#endif