// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UAPASTEBOARDFILECHUNKITEMPROVIDER_H
#define UAPASTEBOARDFILECHUNKITEMPROVIDER_H

@class NSFileHandle, NSString, NSNumber, NSUUID;
@protocol UAPasteboardItemProviding;

#import <Foundation/Foundation.h>


@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding>



@property NSInteger chunkSize; // ivar: _chunkSize
@property (retain) NSFileHandle *dataFile; // ivar: _dataFile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSNumber *offsetInFile; // ivar: _offsetInFile
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithType:(id)arg0 fileHandle:(id)arg1 offsetInFile:(id)arg2 size:(NSInteger)arg3 ;
-(void)getDataWithCompletionBlock:(id)arg0 ;


@end


#endif