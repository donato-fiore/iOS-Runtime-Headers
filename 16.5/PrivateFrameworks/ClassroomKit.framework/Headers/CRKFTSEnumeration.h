// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFTSENUMERATION_H
#define CRKFTSENUMERATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKFTSEnumeration : NSObject {
    NSString *mDirectoryPath;
    int mOptions;
}




+(int)defaultOptions;
-(BOOL)shouldSkipEntry:(struct _ftsent *)arg0 ;
-(id)entriesWithError:(*id)arg0 ;
-(id)init;
-(id)initWithDirectoryPath:(id)arg0 ;
-(id)initWithDirectoryPath:(id)arg0 options:(int)arg1 ;
-(id)readAllEntriesFromFTS:(struct ? *)arg0 error:(*id)arg1 ;
-(id)readNextEntryFromFTS:(struct ? *)arg0 error:(*id)arg1 ;
-(struct ? *)makeFTSWithError:(*id)arg0 ;
-(void)closeFTS:(struct ? *)arg0 ;


@end


#endif