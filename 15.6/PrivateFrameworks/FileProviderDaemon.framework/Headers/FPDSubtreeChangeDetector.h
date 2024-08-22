// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDSUBTREECHANGEDETECTOR_H
#define FPDSUBTREECHANGEDETECTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FPDSubtreeChangeDetector : NSObject {
    int _fd;
    NSString *_path;
    NSUInteger _fileID;
    NSUInteger _genCount;
}




-(BOOL)maintainDirstatWithError:(*id)arg0 ;
-(NSUInteger)retrieveDirstatGenCountWithError:(*id)arg0 ;
-(NSUInteger)retrieveFileIDWithError:(*id)arg0 ;
-(id)description;
-(id)initAtPath:(id)arg0 error:(*id)arg1 ;
-(id)verifyTreeIdentityWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif