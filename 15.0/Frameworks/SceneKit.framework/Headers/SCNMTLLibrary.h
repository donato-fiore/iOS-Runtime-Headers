// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLLIBRARY_H
#define SCNMTLLIBRARY_H

@class NSURL;
@protocol MTLLibrary;

#import <Foundation/Foundation.h>

#import "SCNMTLLibraryManager.h"

@interface SCNMTLLibrary : NSObject {
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
}


@property (readonly, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library


-(id)initWithPath:(id)arg0 manager:(id)arg1 ;
-(void)_load;
-(void)dealloc;


@end


#endif