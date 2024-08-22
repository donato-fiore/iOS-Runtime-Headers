// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBINARYENTRY_H
#define MTLBINARYENTRY_H

@class NSArray;
@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface MTLBinaryEntry : NSObject

@property (readonly) NSObject<OS_dispatch_data> *data; // ivar: _data
@property (readonly) NSArray *importedLibraries; // ivar: _importedLibraries
@property (readonly) NSArray *importedSymbols; // ivar: _importedSymbols


-(id)description;
-(id)initWithData:(id)arg0 importedSymbols:(id)arg1 importedLibraries:(id)arg2 ;
-(void)dealloc;


@end


#endif