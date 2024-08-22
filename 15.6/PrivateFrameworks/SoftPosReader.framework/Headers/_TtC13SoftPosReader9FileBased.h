// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER9FILEBASED_H
#define _TTC13SOFTPOSREADER9FILEBASED_H

@protocol SPRPersisting;

#import <Foundation/Foundation.h>


@interface _TtC13SoftPosReader9FileBased : NSObject <SPRPersisting>

 {
    ? filepath;
    ? maxFileSize;
    ? keyLength;
    ? sizeByteLength;
    ? beginningOfFileOffset;
    ? queue;
}




-(BOOL)deleteAll:(*id)arg0 ;
-(BOOL)deleteWithKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertWithKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateWithKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)retrieveAll:(*id)arg0 ;
-(id)retrieveWithKey:(id)arg0 error:(*id)arg1 ;


@end


#endif