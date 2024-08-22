// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFOBJECTTABLE_H
#define MFOBJECTTABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFObjectTable : NSObject {
    NSMutableArray *m_objects;
}


@property unsigned int maximumSize; // ivar: m_maximumSize


-(id)getObject:(unsigned int)arg0 ;
-(id)init;
-(int)deleteObject:(unsigned int)arg0 ;
-(int)putObject:(id)arg0 in_objectPos:(unsigned int)arg1 ;
-(int)selectInto:(int)arg0 io_DC:(id)arg1 ;
-(int)size;
-(unsigned int)insertPos;
-(void)clear;


@end


#endif