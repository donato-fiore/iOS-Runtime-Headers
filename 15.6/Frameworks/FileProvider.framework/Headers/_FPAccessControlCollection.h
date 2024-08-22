// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPACCESSCONTROLCOLLECTION_H
#define _FPACCESSCONTROLCOLLECTION_H

@protocol FPXEnumerator;


#import "FPItemCollection.h"

@interface _FPAccessControlCollection : FPItemCollection {
    id<FPXEnumerator> *_enumerator;
}




-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)description;
-(id)initWithEnumerator:(id)arg0 ;


@end


#endif