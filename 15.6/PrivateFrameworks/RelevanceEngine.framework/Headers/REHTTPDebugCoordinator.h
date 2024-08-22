// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REHTTPDEBUGCOORDINATOR_H
#define REHTTPDEBUGCOORDINATOR_H


#import <Foundation/Foundation.h>

#import "RETrainingSimulator.h"

@interface REHTTPDebugCoordinator : NSObject {
    RETrainingSimulator *_simulator;
}




-(id)_createContentItemWithTitle:(id)arg0 content:(id)arg1 ;
-(id)_createHTMLTableFromDictionary:(id)arg0 ;
-(id)_createHTMLTableRowFromArray:(id)arg0 itemElementTag:(id)arg1 ;
// -(id)_createTableWithItems:(id)arg0 itemFormatBlock:(id)arg1 valueBlock:(unk)arg2  ;
-(id)_linkElementForTableItem:(id)arg0 paths:(id)arg1 ;
-(id)_linkToPaths:(id)arg0 ;
-(id)_stringElementForObject:(id)arg0 ;
-(id)_stringForObject:(id)arg0 ;
-(id)_urlFromPaths:(id)arg0 ;
-(id)initWithSimulator:(id)arg0 ;
-(void)generateDiagnosticsForPaths:(id)arg0 completion:(id)arg1 ;


@end


#endif