// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFCRRECENTCONTACTABCONTEXT_H
#define _MFCRRECENTCONTACTABCONTEXT_H


#import <Foundation/Foundation.h>


@interface _MFCRRecentContactABContext : NSObject {
    *void _existingPerson;
    *void _interimPerson;
    int _identifier;
}




-(*void)existingPerson;
-(*void)interimPerson;
-(id)init;
-(int)identifier;
-(void)dealloc;
-(void)setExistingPerson:(*void)arg0 ;
-(void)setIdentifier:(int)arg0 ;
-(void)setInterimPerson:(*void)arg0 ;


@end


#endif