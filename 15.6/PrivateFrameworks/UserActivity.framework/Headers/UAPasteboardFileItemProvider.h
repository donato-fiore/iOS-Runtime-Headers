// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UAPASTEBOARDFILEITEMPROVIDER_H
#define UAPASTEBOARDFILEITEMPROVIDER_H

@class NSString, NSURL, NSData, NSUUID;
@protocol UAPasteboardFileItemProviding;

#import <Foundation/Foundation.h>


@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property BOOL isDir; // ivar: _isDir
@property (nonatomic) BOOL preferFileRep; // ivar: _preferFileRep
@property (retain) NSData *sandboxExtension; // ivar: _sandboxExtension
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)conformsToProtocol:(id)arg0 ;
-(id)getFileName;
-(id)initWithURL:(id)arg0 sandboxExtension:(id)arg1 ;
-(void)accessFileAtURLWithCompletion:(id)arg0 ;
-(void)getDataFileWithCompletionBlock:(id)arg0 ;
-(void)getDataWithCompletionBlock:(id)arg0 ;


@end


#endif