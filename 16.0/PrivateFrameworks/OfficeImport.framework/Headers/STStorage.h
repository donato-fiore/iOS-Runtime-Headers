// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGE_H
#define STSTORAGE_H



#import "STSStgObject.h"

@interface STStorage : STSStgObject {
    *_Storage m_pCStorage;
}




-(id)getChildrenInfo;
-(id)getInfo;
-(id)init;
-(id)initWithCStorage:(struct _Storage *)arg0 ;
-(id)openStorage:(id)arg0 withMode:(int)arg1 ;
-(id)openStream:(id)arg0 withMode:(int)arg1 ;
-(int)getChildType:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)setClass:(struct ? )arg0 ;


@end


#endif