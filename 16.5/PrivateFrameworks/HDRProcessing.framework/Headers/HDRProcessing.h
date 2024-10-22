

#include "HDRProcessor.h"
#include "HDRProcessorMetal.h"
#include "ForwardDmShader.h"
#include "HDRBackwardDisplayManagement.h"
#include "MSRHDRProcessingT2.h"
#include "HistStatLinkedListNode.h"
#include "ComposerShader.h"
#include "DolbyVisionComposer.h"
#include "AdaptiveTM.h"
#include "ResamplerShader.h"
#include "ResamplerTextures.h"
#include "SpatialResampler.h"
#include "DolbyVisionDM4.h"
#include "MSRColorConfigMemoryPool.h"
#include "DMShader.h"
#include "DolbyVisionDisplayManagement.h"
#include "MSRHDRProcessingT1.h"
#include "HistBasedToneMapping.h"
#include "MSRHDRProcessingT3.h"
#include "ProcessingEngine.h"
#include "MSRHDRProcessingT4.h"
#include "MSRHDRProcessing.h"
#include "DolbyVisionMR.h"
