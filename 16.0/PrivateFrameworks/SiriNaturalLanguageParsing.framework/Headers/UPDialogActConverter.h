// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPDIALOGACTCONVERTER_H
#define UPDIALOGACTCONVERTER_H


#import <Foundation/Foundation.h>

#import "UPUsoSerializer.h"

@interface UPDialogActConverter : NSObject

@property (readonly, copy) UPUsoSerializer *usoSerializer; // ivar: _usoSerializer


-(id)_convertFromGaveOptionsDialogAct:(id)arg0 error:(*id)arg1 ;
-(id)_convertFromOfferedDialogAct:(id)arg0 error:(*id)arg1 ;
-(id)_convertFromPromptedDialogAct:(id)arg0 error:(*id)arg1 ;
-(id)_parseUserDialogAct:(id)arg0 error:(*id)arg1 ;
-(id)_parseUserDialogActGraph:(id)arg0 error:(*id)arg1 ;
-(id)convertFromDialogAct:(id)arg0 error:(*id)arg1 ;
-(id)initWithUsoSerializer:(id)arg0 ;


@end


#endif