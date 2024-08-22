// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTUPLOADFILESRESULT_H
#define ASTUPLOADFILESRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface ASTUploadFilesResult : NSObject

@property (retain, nonatomic) NSArray *certs; // ivar: _certs
@property (retain, nonatomic) NSArray *files; // ivar: _files
@property (retain, nonatomic) NSString *source; // ivar: _source


+(id)resultFromSource:(id)arg0 andUploadDictionaries:(id)arg1 ;
-(BOOL)isEmpty;
-(id)generatePayload;
-(id)initWithSource:(id)arg0 andCerts:(id)arg1 andFiles:(id)arg2 ;


@end


#endif