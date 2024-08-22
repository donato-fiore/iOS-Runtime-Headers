// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTGINFO_H
#define STSTGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STStgInfo : NSObject {
    NSString *m_pstrName;
    int m_type;
    unsigned int m_userFlags;
    unsigned int m_size;
    NSInteger m_creationTime;
    NSInteger m_modificationTime;
    int m_accessMode;
    ? m_clsid;
}




-(NSInteger)getCreationTime;
-(NSInteger)getModificationTime;
-(id)getName;
-(id)init;
-(id)initWithStgInfo:(struct _StgInfo *)arg0 ;
-(int)getAccessMode;
-(int)getType;
-(struct ? )getCLSID;
-(unsigned int)getSize;
-(unsigned int)getUserFlags;
-(void)setAccessMode:(int)arg0 ;
-(void)setCLSID:(struct ? )arg0 ;
-(void)setCreationTime:(NSInteger)arg0 ;
-(void)setModificationTime:(NSInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setSize:(unsigned int)arg0 ;
-(void)setType:(int)arg0 ;
-(void)setUserFlags:(unsigned int)arg0 ;


@end


#endif